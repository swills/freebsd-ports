# Created by: Espen Tagestad <espen@tagestad.no>
# $FreeBSD: head/www/p5-CGI-Application-Plugin-DBH/Makefile 415839 2016-05-25 15:43:34Z mat $

PORTNAME=	CGI-Application-Plugin-DBH
PORTVERSION=	4.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Easy DBI access from CGI::Application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=0:www/p5-CGI-Application \
		p5-DBI>=0:databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=1.20120301:devel/p5-Test-MockObject

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
