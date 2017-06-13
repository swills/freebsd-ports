# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Sub-Identify/Makefile 438369 2017-04-12 16:24:19Z sunpoet $

PORTNAME=	Sub-Identify
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieve names of code references

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Sub/Identify/Identify.so

.include <bsd.port.mk>
