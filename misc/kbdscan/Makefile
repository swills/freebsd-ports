# $FreeBSD: head/misc/kbdscan/Makefile 477009 2018-08-12 17:33:17Z sunpoet $

PORTNAME=	kbdscan
PORTVERSION=	20110507
CATEGORIES=	misc
MASTER_SITES=	https://hack.org/mc/hacks/kbdscan/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Show scancodes of keys pressed and released

LICENSE=	ISCL

USES=		tar:bzip2

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
