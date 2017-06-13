# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/textproc/hhm/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	hhm
PORTVERSION=	0.1.1
CATEGORIES=	textproc
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML Help Maker

LIB_DEPENDS=	liblzxcomp.so:archivers/liblzxcomp

USES=		uidfix
MAKEFILE=	${FILESDIR}/Makefile

PLIST_FILES=	bin/hhm

post-patch:
	${REINPLACE_CMD} -e 's!^typedef unsigned.*$$!!' ${WRKSRC}/hhm.c

.include <bsd.port.mk>
