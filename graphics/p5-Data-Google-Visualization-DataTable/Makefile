# $FreeBSD: head/graphics/p5-Data-Google-Visualization-DataTable/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Data-Google-Visualization-DataTable
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jeremybbaggs@gmail.com
COMMENT=	Easily create Google DataTable objects for the Google Visulization API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON-XS>=2.0:converters/p5-JSON-XS
RUN_DEPENDS=	p5-JSON-XS>=2.0:converters/p5-JSON-XS

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
