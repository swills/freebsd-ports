# $FreeBSD: head/devel/p5-Best/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Best
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GAAL
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Fallbackable module loader

BUILD_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
