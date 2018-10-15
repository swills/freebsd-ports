# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/net/p5-POE-Component-Client-Ping/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	POE-Component-Client-Ping
PORTVERSION=	1.175
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component for non-blocking/concurrent ICMP ping

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-POE>=1.0070:devel/p5-POE

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
