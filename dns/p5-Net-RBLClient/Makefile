# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/dns/p5-Net-RBLClient/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Net-RBLClient
PORTVERSION=	0.5
PORTREVISION=	2
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Queries multiple Realtime Blackhole Lists in parallel

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-DNS>=0:dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

WRKSRC=		${WRKDIR}/RBLCLient-${PORTVERSION}

.include <bsd.port.mk>
