# $FreeBSD: head/www/p5-Dancer-Plugin-CORS/Makefile 489355 2019-01-05 16:52:54Z swills $

PORTNAME=	Dancer-Plugin-CORS
PORTVERSION=	0.11
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ZURBORG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dancer plugin for using cross origin resource sharing

RUN_DEPENDS=	p5-Dancer>0:www/p5-Dancer \
		p5-Modern-Perl>=0:lang/p5-Modern-Perl \
		p5-Sub-Name>=0:devel/p5-Sub-Name
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
