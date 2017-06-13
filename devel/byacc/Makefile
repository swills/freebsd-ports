# $FreeBSD: head/devel/byacc/Makefile 439871 2017-05-01 12:45:49Z sunpoet $

PORTNAME=	byacc
PORTVERSION=	20170430
CATEGORIES=	devel
MASTER_SITES=	ftp://invisible-island.net/${PORTNAME}/ \
		LOCAL/sunpoet

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Best yacc variant available

LICENSE=	PD

GNU_CONFIGURE=	yes
MAKE_ARGS=	DEFINES="-DMAXTABLE=INT_MAX"
MAKEFILE=	makefile
TEST_TARGET=	check
USES=		tar:tgz

PLIST_FILES=	bin/yacc \
		man/man1/yacc.1.gz

.include <bsd.port.mk>
