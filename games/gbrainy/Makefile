# $FreeBSD$

PORTNAME=	gbrainy
PORTVERSION=	2.4.3
PORTEPOCH=	2
CATEGORIES=	games
MASTER_SITES=	http://gent.softcatala.org/jmas/gbrainy/

MAINTAINER=	ed.arrakis@gmail.com
COMMENT=	Brain teaser game and trainer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	mautil:devel/mono-addins \
		${LOCALBASE}/bin/bash:shells/bash
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		gettext gmake gnome mono pathfix pkgconfig shebangfix
USE_GNOME=	gtksharp20 gnomesharp20 intltool
INSTALLS_ICONS=	yes
SHEBANG_FILES=	src/Clients/Classical/gbrainy.in
GNU_CONFIGURE=	yes

MAKE_ENV+=	MONO_REGISTRY_PATH=${WRKDIR}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PORTDOCS=	NEWS README

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/NEWS ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
