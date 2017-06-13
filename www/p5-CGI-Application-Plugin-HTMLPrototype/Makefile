# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: head/www/p5-CGI-Application-Plugin-HTMLPrototype/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Application-Plugin-HTMLPrototype
PORTVERSION=	0.20
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Access to the prototype JavaScript library using HTML::Prototype

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=0:www/p5-CGI-Application \
		p5-HTML-Prototype>=0:www/p5-HTML-Prototype
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
