# Created by: John Hein <jhein@symmetricom.com>
# $FreeBSD$

PORTNAME=	bbcp
PORTVERSION=	20150116
PORTREVISION=	1
CATEGORIES=	sysutils net
MASTER_SITES=	http://BSDforge.com/projects/source/sysutils/bbcp/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Secure, fast, and IPv6 capable Copy utility

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/src/COPYING.LESSER

BROKEN=		fails to build

USES=		tar:xz
USE_CXXSTD=	c++98

PLIST_FILES=	bin/bbcp
PORTDOCS=	FREEBSDUSERS ${PORTNAME}.pdf

BUILD_WRKSRC=	${WRKSRC}/src

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|g++|${CXX}|' -e 's|gcc|${CC}|' \
		${WRKSRC}/src/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/FreeBSD/bbcp ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${FILESDIR}/FREEBSDUSERS \
		${STAGEDIR}${DOCSDIR}/FREEBSDUSERS
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.pdf \
		${STAGEDIR}${DOCSDIR}/${PORTNAME}.pdf

post-install:
	@${ECHO_MSG} "********************************************************"
	@${ECHO_MSG} "*           IMPORTANT           IMPORTANT              *"
	@${ECHO_MSG} "********************************************************"
	@${ECHO_MSG} "*  Please read ${DOCSDIR}/FREEBSDUSERS"
	@${ECHO_MSG} "*  for valuable information regarding some of the"
	@${ECHO_MSG} "*  problems users have reported running ${PORTNAME} on"
	@${ECHO_MSG} "*  FreeBSD, and the solutions to many, if not all"
	@${ECHO_MSG} "*  of them."
	@${ECHO_MSG} "*"
	@${ECHO_MSG} "********************************************************"

.include <bsd.port.mk>
