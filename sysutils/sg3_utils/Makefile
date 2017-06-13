# Created by: Denis Barov <dindin@dindin.ru>
# $FreeBSD: head/sysutils/sg3_utils/Makefile 417617 2016-06-26 20:39:01Z delphij $

PORTNAME=	sg3_utils
PORTVERSION=	1.42
CATEGORIES=	sysutils
MASTER_SITES=	http://sg.danny.cz/sg/p/

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Set of utilities that send SCSI commands to devices

USES=		gmake libtool shebangfix tar:tgz
SHEBANG_FILES=	scripts/scsi_*

post-install:
		${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsgutils2.so.2

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
