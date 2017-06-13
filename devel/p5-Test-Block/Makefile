# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Test-Block/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Test-Block
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Specify fine granularity test plans

DEPRECATED=	Marked as depreciated upstream
EXPIRATION_DATE=	2017-03-01

BUILD_DEPENDS=	p5-Test-Exception>=0.15:devel/p5-Test-Exception \
		p5-Test-Simple>=0.47:devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
