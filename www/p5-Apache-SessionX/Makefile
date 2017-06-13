# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/www/p5-Apache-SessionX/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Apache-SessionX
PORTVERSION=	2.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extented persistence framework for session data

BUILD_DEPENDS=	p5-Apache-Session>=0:www/p5-Apache-Session
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
