# Whom:					Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: head/x11-themes/gnome-icons/bsd.gnome-icons.mk 451901 2017-10-12 15:57:51Z mat $

PKGNAMEPREFIX=	gnome-icons-

NO_BUILD=	yes
NO_ARCH=	yes

REASON=		Themes may contain artwork not done by the author. \
		Keep FreeBSD safe if theme author violated copyrights.

INSTALLS_ICONS=	yes

do-install: icon-do-install

icon-do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/share/icons/
