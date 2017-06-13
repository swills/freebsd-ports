# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: head/www/p5-CGI-Application-Plugin-DevPopup/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Application-Plugin-DevPopup
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Runtime cgiapp info in a popup window

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=4.01:www/p5-CGI-Application \
		p5-HTML-Template>0:www/p5-HTML-Template \
		p5-IO-stringy>0:devel/p5-IO-stringy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
