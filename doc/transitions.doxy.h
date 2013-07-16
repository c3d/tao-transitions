/**
 * @~english
 * @taomoduledescription{Transitions, Page transition effects}
 * <tt>import Transitions</tt> - Commands to add special transition effects when changing pages.@n
 *
 * The Transitions module provides commands to easily add transition effects
 * to a presentation.
 * You may use the same transition for all pages, or you may select one effect
 * per page. When a transition command is used in a page, it is applied when
 * leaving that page (that is, when going from the current page to the next
 * one).@n
 * Note that all commands that have <tt>_ft_</tt> in their name
 * (@ref transition_ft_dissolve for instance) convert the pages to frame
 * textures (2D images). Therefore, 3D scenes won't appear in 3D during the
 * transition. The commands that do not have <tt>_ft_</tt> in their name
 * do not perform such conversion, and full 3D effects remain visible even
 * during the transition.@n
 * All transitions take a duration parameter, @p D, which may be omitted. The
 * default duration is 1.5 seconds.@n
 * Here is an example (<a href="transitions.ddd">transitions.ddd</a>):
 *
 * @include transitions.ddd
 *
 * @endtaomoduledescription{Transitions}
 *
 * @~french
 * @taomoduledescription{Transitions, Effets de transitions entre pages}
 * <tt>import Transitions</tt> - Commandes pour ajouter des effets de transitions lors des changements de page.@n
 *
 * Le module Transitions fournit des commandes qui vous permettent d'ajouter
 * simplement des effets de transitions à une présentation. Vous pouvez
 * utiliser la même transition pour toutes les pages, ou bien en choisir une
 * par page. Lorsqu'une commande de transition est utilisée dans une page, elle
 * s'applique lorsqu'on quitte cette page (c'est-à-dire lorsqu'on passe de la
 * page courante à la nouvelle page).@n
 * Notez que les commandes dont le nom contient <tt>_ft_</tt> (par exemple,
 * @ref transition_ft_dissolve) convertissent les pages en textures 2D avant
 * de leur appliquer l'effet. Par conséquent, les pages qui font usage de la 3D
 * n'auront pas de relief pendant la transition. Les commandes qui n'ont pas
 * <tt>_ft_</tt> ne font pas cette conversion, et les objets sont donc visible
 * en 3D y compris lors de la transition.@n
 * Toutes les transitions acceptent un paramètre @p D de durée. La valeur par
 * défaut est 1.5 seconde.@n
 * Voici un exemple (<a href="transitions_fr.ddd">transitions_fr.ddd</a>):
 *
 * @include transitions_fr.ddd
 *
 * @endtaomoduledescription{Transitions}
 *
 * @~
 * @{
 */

/**
 * @~english
 * Mix the current and next page.
 * The current page gradually disappears while the next one appears.@n
 * @p D is the duration in seconds.
 * @~french
 * Effet de fondu-enchaîné.
 * La page en cours disparaît progressivement tandis que la suivante
 * apparaît.@n
 * @p D est la durée en secondes.
 */
transition_ft_dissolve(D:real);
transition_ft_dissolve();

/**
 * @~english
 * Smoothly transition to a solid color then to the next page.
 * The current page gradually disappears while the screen becomes
 * filled with the color specified by @p R, @p G and @p B. Then
 * the next page slowly appears.@n
 * @p D is the duration in seconds.
 * @~french
 * Transition par une couleur uniforme.
 * La page en cours disparaît progressivement pour laisser place à une
 * couleur uniforme, spécifiée par  @p R, @p G et @p B. Puis la page
 * suivant apparaît progressivement.@n
 * @p D est la durée en secondes.
 */
transition_fade_through_color(R:real, G:real, B:real, D:real);
transition_fade_through_color(R:real, G:real, B:real);

/**
 * @~english
 * The next page pushes the old one.
 * The direction is given by the @p LeftRight and @p TopBottom parameters.
 * Acceptable values are -1, 0 and 1. 0 means no movement along the
 * specified direction. 1 is for left to right and top to bottom, while
 * -1 reverses the movement (right to left or bottom to top). When both
 * parameters are non-zero, a diagonal move is executed.@n
 * @p D is the duration in seconds.
 * @~french
 * La nouvelle page pousse la précédente.
 * La direction du déplacement est donnée par les paramètres
 * @p LeftRight (de gauche à droite) et @p TopBottom (de haut en bas). 0
 * signifie aucun mouvement le long de cet direction. 1 active le sens
 * de gauche à droite ou de hat en bas. -1 permet d'inverser le sens
 * (de droite à gauche et de bas en haut). Lorsque les deux paramètres sont
 * non nuls, un mouvement diagonal est exécuté.@n
 * @p D est la durée en secondes.
 */
transition_ft_push (LeftRight:integer, TopBottom:integer, D:real);
transition_ft_push (LeftRight:integer, TopBottom:integer);

/**
 * @~english
 * The next page appears inside or outside a circle.
 * The direction is given by the @p InOut parameters.
 * Acceptable values are -1 and 1. When @p InOut is 1, the size of the
 * circle decreases and the next page is shown outside the circle. When
 * @p InOut is -1, the circle grows and the next page is inside the
 * circle.@n
 * @p D is the duration in seconds.
 * @~french
 * La nouvelle page apparaît dans ou en-dehors d'un cercle.
 * La direction est donnée par le paramètre @p InOut (intérieur/extérieur).
 * Les valeurs possibles sont -1 et 1. Lorsque @p InOut vaut 1, le cercle
 * diminue et la nouvelle page est l'extérieur du cercle. Lorsque @p InOut
 * vaut -1, le cercle grossit et la nouvelle page est à l'intérieur.@n
 * @p D est la durée en secondes.
 */
transition_ft_iris (InOut:integer, D:real);
transition_ft_iris (InOut:integer);

/**
 * @~english
 * The next page is moved over the old one.
 * See @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real)
 * for the meaning of @p LeftRight and @p TopBotom.@n
 * @p D is the duration in seconds.
 * @~french
 * La nouvelle page se déplace au-dessus de la précédente.
 * La signification de @p LeftRight and @p TopBotom est comme expliquée pour
 * @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real).@n
 * @p D est la durée en secondes.
 */
transition_ft_movein (LeftRight:integer, TopBottom:integer, D:real);
transition_ft_movein (LeftRight:integer, TopBottom:integer);

/**
 * @~english
 * The current page is moved and reveals the next one.
 * See @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real)
 * for the meaning of @p LeftRight and @p TopBotom.@n
 * @p D is the duration in seconds.
 * @~french
 * La page courante se déplace pour révéler la suivante.
 * La signification de @p LeftRight and @p TopBotom est comme expliquée pour
 * @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real).@n
 * @p D est la durée en secondes.
 */
transition_ft_reveal (LeftRight:integer, TopBottom:integer, D:real);
transition_ft_reveal (LeftRight:integer, TopBottom:integer);

/**
 * @~english
 * A moving line splits the screen between the current and the next page.
 * See @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real)
 * for the meaning of @p LeftRight and @p TopBotom.@n
 * @p D is the duration in seconds.
 * @~french
 * Une ligne qui se déplace partage l'écran entre les deux pages.
 * La signification de @p LeftRight and @p TopBotom est comme expliquée pour
 * @ref transition_ft_push(LeftRight:integer, TopBottom:integer, D:real).@n
 * @p D est la durée en secondes.
 */
transition_ft_wipe (LeftRight:integer, TopBottom:integer, D:real);
transition_ft_wipe (LeftRight:integer, TopBottom:integer);


transition_ft_translate_in(D:real);
transition_ft_translate_in();
transition_ft_translate_out(D:real);
transition_ft_translate_out();

transition_ft_scale_in_out(D:real);
transition_ft_scale_in_out();
transition_ft_scale_out_in(D:real);
transition_ft_scale_out_in();

transition_ft_scale_up(D:real);
transition_ft_scale_up();
transition_ft_scale_down(D:real);
transition_ft_scale_down();

transition_ft_scale_in(D:real);
transition_ft_scale_in();
transition_ft_scale_out(D:real);
transition_ft_scale_out();

/**
 * @}
 */
