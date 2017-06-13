# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: head/www/p5-CGI-Application-Plugin-Session/Makefile 415696 2016-05-23 03:53:19Z sunpoet $

PORTNAME=	CGI-Application-Plugin-Session
PORTVERSION=	1.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Plugin that adds session support to CGI::Application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=3.21:www/p5-CGI-Application \
		p5-CGI-Session>=4.48:www/p5-CGI-Session
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-CGI-Simple>=0:www/p5-CGI-Simple \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-Simple>=1.001002:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
