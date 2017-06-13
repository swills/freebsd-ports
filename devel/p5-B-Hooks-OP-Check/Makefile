# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-B-Hooks-OP-Check/Makefile 440719 2017-05-12 21:50:47Z sunpoet $

PORTNAME=	B-Hooks-OP-Check
PORTVERSION=	0.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Wrap OP check callbacks

BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.302:devel/p5-ExtUtils-Depends

USE_PERL5=	configure
USES=		perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Hooks/OP/Check/Check.so

.include <bsd.port.mk>
