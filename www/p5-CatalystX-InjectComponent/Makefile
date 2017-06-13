# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/p5-CatalystX-InjectComponent/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CatalystX-InjectComponent
PORTVERSION=	0.025
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Inject components into your Catalyst application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.80000:www/p5-Catalyst-Runtime \
		p5-Class-Inspector>=0:devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Most>=0:devel/p5-Test-Most

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
