# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: head/www/p5-CGI-Application-Plugin-Stream/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	CGI-Application-Plugin-Stream
PORTVERSION=	2.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Plugin that adds file streaming support to CGI::Application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=0:www/p5-CGI-Application \
		p5-File-MMagic>=0:devel/p5-File-MMagic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
