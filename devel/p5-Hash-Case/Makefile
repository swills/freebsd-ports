# Created by: Gea-Suan Lin
# $FreeBSD: head/devel/p5-Hash-Case/Makefile 463573 2018-03-04 16:11:13Z sunpoet $

PORTNAME=	Hash-Case
PORTVERSION=	1.030
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARKOV
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S|0$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Base class for hashes with key-casing requirements

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Report>=0.26:devel/p5-Log-Report
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
