# $FreeBSD$

PORTNAME=	ix
PORTVERSION=	1.0
CATEGORIES=	misc
MASTER_SITES=	http://ix.io/
DISTFILES=	client
EXTRACT_SUFX=	# empty

MAINTAINER=	bwidawsk@FreeBSD.org
COMMENT=	Commandline utility for utilizing ix.io

LICENSE=        UNKNOWN
LICENSE_NAME=   unknown
LICENSE_TEXT=   This program is in public domain. It can be freely distributed.
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	bash:shells/bash curl:ftp/curl

USES=		shebangfix
NO_WRKSUBDIR=   yes
EXTRACT_CMD=    ${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=     ${WRKSRC}
NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	bin/${PORTNAME}
SHEBANG_FILES=	client

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/client ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
