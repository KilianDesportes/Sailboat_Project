# Projet voilier - programmation de µcontrôleur 

Différentes fonctions, reliées à différents périphériques :

<pre>
Vent           →  Girouette           → INPUT  : GPIO + Timer incrémental (quadrature signaux + index)
               →  Voile               → OUTPUT : PWM (timer) Periode 20ms et front montant 1 à 2ms
Gravité        →  Accelerometre       → INPUT  : ADC Tension proportionnelle à l'acceleration (mV/G)
Telecommande   →  RxFM                → INPUT  : PWM (timer) entre 1 et 2ms (1.5ms = neutre)
               →  Plateau             → OUTPUT : GPIO etat bas = droite ; etat haut = gauche - Timer alpha pour la rapidité [20,100]% 
Pupitre        →  TxFM                → INPUT  : USART 9600 bauds - Data
Alimentation   →  Carte electronique  → OUTPUT : ADC Tension proportionnel valeur de référence
</pre>

Utilisation librairies LL pour les périphériques USART & GPIO (+ Timer & ADC?).
