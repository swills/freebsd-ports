# Created by: Foxfair Hu <foxfair@FreeBSD.org>
# $FreeBSD: head/www/p5-HTML-Scrubber/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	HTML-Scrubber
PORTVERSION=	0.15
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for scrubbing/sanitizing html

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Parser>=3.47:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-CPAN-Meta>=0:devel/p5-Test-CPAN-Meta \
		p5-Test-EOL>=0:devel/p5-Test-EOL \
		p5-Test-Memory-Cycle>=0:devel/p5-Test-Memory-Cycle \
		p5-Test-NoTabs>=0:devel/p5-Test-NoTabs

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
