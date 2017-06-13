# Created by: tg
# $FreeBSD: head/editors/uemacs/Makefile 408262 2016-02-05 18:59:49Z marino $

PORTNAME=	uemacs
PORTVERSION=	4.0
CATEGORIES=	editors
MASTER_SITES=	http://dl.ozzmosis.com/uemacs/
DISTNAME=	ue400dev

MAINTAINER=	mail@ozzmosis.com
COMMENT=	Full screen editor

NO_CDROM=	Resale allowed for media cost only

NO_WRKSUBDIR=	yes
USES=		dos2unix ncurses zip
EXTRACT_BEFORE_ARGS=	-Lq

post-patch:
	@${REINPLACE_CMD} -e "s|%%PREFIX%%|${PREFIX}|g" ${WRKSRC}/src/*.c
	@${REINPLACE_CMD} -e 's|-ltermcap|${LDFLAGS} -lncurses|g' \
		${WRKSRC}/freebsd/makefile

.include <bsd.port.mk>
