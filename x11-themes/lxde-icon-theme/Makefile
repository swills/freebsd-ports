# Created by: Kris Moore <kmoore@FreeBSD.org>
# $FreeBSD: head/x11-themes/lxde-icon-theme/Makefile 433714 2017-02-09 09:01:28Z amdmi3 $

PORTNAME=	lxde-icon-theme
PORTVERSION=	0.5.1
CATEGORIES=	x11-themes
MASTER_SITES=	SF/lxde/LXDE%20Icon%20Theme/${DISTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	LXDE Icon Theme

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz
GNU_CONFIGURE=	yes
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/lxde
INSTALLS_ICONS=	yes

PORTDOCS=	AUTHORS

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|cp -raf --no-preserve=ownership|cp -RpPf|' \
		${WRKSRC}/Makefile.in

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
