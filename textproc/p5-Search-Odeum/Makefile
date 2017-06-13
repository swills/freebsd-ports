# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/p5-Search-Odeum/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Search-Odeum
PORTVERSION=	0.02
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl interface to the Odeum inverted index API

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libqdbm.so:databases/qdbm

USE_PERL5=	configure
USES=		localbase perl5

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Search/Odeum/Odeum.so

.include <bsd.port.mk>
