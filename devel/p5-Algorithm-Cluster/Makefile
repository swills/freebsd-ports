# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: head/devel/p5-Algorithm-Cluster/Makefile 468722 2018-04-30 17:08:57Z sunpoet $

PORTNAME=	Algorithm-Cluster
PORTVERSION=	1.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MDEHOON
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to C clustering library

MAKE_JOBS_UNSAFE=	yes

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Algorithm/Cluster/Cluster.so

.include <bsd.port.mk>
