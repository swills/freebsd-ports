# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net/p5-OurNet-BBSAgent/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	OurNet-BBSAgent
PORTVERSION=	1.61
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Scriptable telnet-based virtual users

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-Telnet>=0:net/p5-Net-Telnet

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
