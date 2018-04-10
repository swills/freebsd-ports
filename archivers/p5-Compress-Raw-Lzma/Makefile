# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@sunpoet.net>
# $FreeBSD: head/archivers/p5-Compress-Raw-Lzma/Makefile 466888 2018-04-09 18:50:54Z sunpoet $

PORTNAME=	Compress-Raw-Lzma
PORTVERSION=	2.081
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Low-Level Interface to lzma compression library

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Pod>=1:devel/p5-Test-Pod

OPTIONS_DEFINE=	LZMALIB
LZMALIB_DESC=	Use archivers/lzmalia instead of liblzma in base

USE_PERL5=	configure
USES=		perl5

LZMALIB_LIB_DEPENDS=	liblzma.so.1:archivers/lzmalib

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Compress/Raw/Lzma/Lzma.so

.include <bsd.port.mk>
