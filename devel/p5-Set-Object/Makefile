# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/devel/p5-Set-Object/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Set-Object
PORTVERSION=	1.35
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to manage sets of objects

LICENSE=	ART20

TEST_DEPENDS=	p5-Moose>=0:devel/p5-Moose \
		p5-Test-LeakTrace>=0:devel/p5-Test-LeakTrace

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Set/Object/Object.so

.include <bsd.port.mk>
