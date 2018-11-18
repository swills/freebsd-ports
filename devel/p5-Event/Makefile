# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: head/devel/p5-Event/Makefile 485167 2018-11-17 17:33:36Z sunpoet $

PORTNAME=	Event
PORTVERSION=	1.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic Perl Event Loop

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Event/Event.so

.include <bsd.port.mk>
