# Created by: Denis Barov <dindin@dindin.ru>
# $FreeBSD: head/sysutils/sg3_utils/Makefile 488844 2018-12-31 23:03:34Z delphij $

PORTNAME=	sg3_utils
PORTVERSION=	1.44
CATEGORIES=	sysutils
MASTER_SITES=	http://sg.danny.cz/sg/p/

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Set of utilities that send SCSI commands to devices

LICENSE=	BSD2CLAUSE

USES=		gmake libtool shebangfix tar:tgz

SHEBANG_FILES=	scripts/*

post-install:
		${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsgutils2.so.2

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
