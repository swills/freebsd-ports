# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Time-Warp/Makefile 481503 2018-10-08 02:11:48Z wen $

PORTNAME=	Time-Warp
PORTVERSION=	0.54
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Control over the flow of time

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Time/Warp/Warp.so

.include <bsd.port.mk>
