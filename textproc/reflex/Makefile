# Created by: bf@FreeBSD.org
# $FreeBSD: head/textproc/reflex/Makefile 443526 2017-06-13 16:58:03Z sunpoet $

PORTNAME=	reflex
PORTVERSION=	20170521
CATEGORIES=	textproc
MASTER_SITES=	ftp://invisible-island.net/reflex/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Relocalizable fast lexical scanner

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

CONFIGURE_ENV=	YACC="${YACC}"
GNU_CONFIGURE=	yes
TEST_TARGET=	bigcheck
USES=		tar:tgz

.include <bsd.port.mk>
