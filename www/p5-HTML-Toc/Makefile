# Created by: Alex Deiter <Alex.Deiter@Gmail.COM>
# $FreeBSD: head/www/p5-HTML-Toc/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	HTML-Toc
PORTVERSION=	1.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	alex.deiter@gmail.com
COMMENT=	Generate, insert and update HTML Table of Contents

BUILD_DEPENDS=	p5-Test-Differences>=0:devel/p5-Test-Differences \
		p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
