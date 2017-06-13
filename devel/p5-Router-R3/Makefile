# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/p5-Router-R3/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Router-R3
PORTVERSION=	0.011001
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	XS wrapper around a C library R3

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-ExtUtils-MakeMaker>=0:devel/p5-ExtUtils-MakeMaker \
		p5-ExtUtils-PkgConfig>=0:devel/p5-ExtUtils-PkgConfig
LIB_DEPENDS=	libr3.so:devel/libr3

USES=		perl5
USE_PERL5=	configure
CFLAGS+=	-std=c99

post-install:
	${STRIP_CMD} ${STAGEDIR}${SITE_ARCH}/auto/Router/R3/R3.so

.include <bsd.port.mk>
