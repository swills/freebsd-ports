# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/the_silver_searcher/Makefile 442688 2017-06-05 21:00:08Z olgeni $

PORTNAME=	the_silver_searcher
PORTVERSION=	2.0.0
CATEGORIES=	textproc

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Code-searching tool similar to ack but faster

LICENSE=	APACHE20

LIB_DEPENDS=	libpcre.so:devel/pcre
TEST_DEPENDS=	cram:devel/cram

USE_GITHUB=	yes
GH_ACCOUNT=	ggreer

ACLOCAL_ARGS+=	-I ${ACLOCAL_DIR}
AUTOMAKE_ARGS+=	--add-missing
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	LZMA_LIBS=-llzma
CONFIGURE_ARGS+=LZMA_CFLAGS=-I/usr/include
LDFLAGS+=	-L/usr/lib -llzma
USES=		autoreconf pkgconfig
TEST_TARGET=	test

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d
	${MV} ${STAGEDIR}${DATADIR}/completions/ag.bashcomp.sh \
		${STAGEDIR}${PREFIX}/etc/bash_completion.d
	@${RMDIR} ${STAGEDIR}${DATADIR}/completions
	@${RMDIR} ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
