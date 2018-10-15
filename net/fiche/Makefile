# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/net/fiche/Makefile 481390 2018-10-06 19:51:28Z zi $

PORTNAME=	fiche
PORTVERSION=	0.9.1
CATEGORIES=	net
MASTER_SITES=	GH

MAINTAINER=	zi@FreeBSD.org
COMMENT=	Command line pastebin for sharing terminal output

LICENSE=	MIT

USERS=		${PORTNAME}
GROUPS=		${PORTNAME}

USES=		compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	solusipse

USE_RC_SUBR=	${PORTNAME}
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/sbin ${STAGEDIR}${WWWDIR}
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin

.include <bsd.port.mk>
