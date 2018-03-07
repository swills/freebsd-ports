# Created by: Terry Sposato <terry@sucked-in.com>
# $FreeBSD: head/devel/p5-Sys-MemInfo/Makefile 463140 2018-02-27 13:25:31Z sunpoet $

PORTNAME=	Sys-MemInfo
PORTVERSION=	0.99
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sys::MemInfo - Perl extension for getting Memory information

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Sys/MemInfo/MemInfo.so

.include <bsd.port.mk>
