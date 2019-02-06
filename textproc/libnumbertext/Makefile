# $FreeBSD: head/textproc/libnumbertext/Makefile 492188 2019-02-05 02:02:55Z lwhsu $

PORTNAME=	libnumbertext
PORTVERSION=	1.0.5
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/Numbertext/libnumbertext/releases/download/${PORTVERSION}/

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Number to number name and money text conversion libraries

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=	gmake libtool tar:xz

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
