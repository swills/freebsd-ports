# Created by: snowchyld
# $FreeBSD: head/textproc/p5-Hash-Merge/Makefile 464203 2018-03-11 20:31:10Z sunpoet $

PORTNAME=	Hash-Merge
PORTVERSION=	0.300
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Merges hashes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Clone-Choose>=0.008:devel/p5-Clone-Choose
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
