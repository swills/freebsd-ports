# Created by: Robert Withrow <witr@rwwa.com>
# $FreeBSD: head/misc/findutils/Makefile 405680 2016-01-10 09:29:05Z miwi $

PORTNAME=	findutils
PORTVERSION=	4.6.0
CATEGORIES=	misc
MASTER_SITES=	GNU
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}${EXTRACT_SUFX}.sig
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	aehlig@linta.de
COMMENT=	GNU find utilities

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES+=		charsetfix cpe gmake
SIG_FILES=	${DISTNAME}${EXTRACT_SUFX}.sig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--program-prefix=g --localstatedir=${LOCALSTATEDIR}
MAKE_ARGS=	INSTALL_SCRIPT="${INSTALL_SCRIPT}"
INFO=		find find-maint

CPE_VENDOR=	gnu

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext

LOCALSTATEDIR?=	/var/db

.include <bsd.port.mk>
