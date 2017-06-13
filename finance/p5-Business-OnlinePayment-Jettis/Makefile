# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/finance/p5-Business-OnlinePayment-Jettis/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Business-OnlinePayment-Jettis
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Business::OnlinePayment backend module for Jettis

BUILD_DEPENDS=	p5-Business-CreditCard>=0:finance/p5-Business-CreditCard \
		p5-Business-OnlinePayment>=0:finance/p5-Business-OnlinePayment
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
