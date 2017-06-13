# Created by: Geraud Continsouzas <geraud@gcu.info>
# $FreeBSD: head/devel/p5-Object-InsideOut/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Object-InsideOut
PORTVERSION=	4.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JDHEDDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Comprehensive inside-out object support module

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Exception-Class>=1.32:devel/p5-Exception-Class \
		p5-Want>=0.21:devel/p5-Want
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
