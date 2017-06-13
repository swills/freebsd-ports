# Created by: Danny Warren <danny@dannywarren.com>
# $FreeBSD: head/www/p5-CatalystX-AppBuilder/Makefile 421058 2016-08-29 12:54:50Z mat $

PORTNAME=	CatalystX-AppBuilder
PORTVERSION=	0.00011
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	danny@dannywarren.com
COMMENT=	Programatically build your Catalyst app

LICENSE=	ART10

RUN_DEPENDS=	p5-Catalyst-Runtime>=5.8:www/p5-Catalyst-Runtime \
		p5-Moose>=0:devel/p5-Moose \
		p5-namespace-clean>=0:devel/p5-namespace-clean
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
