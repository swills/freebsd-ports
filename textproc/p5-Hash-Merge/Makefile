# Created by: snowchyld
# $FreeBSD: head/textproc/p5-Hash-Merge/Makefile 435062 2017-02-28 14:58:12Z sunpoet $

PORTNAME=	Hash-Merge
PORTVERSION=	0.200
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Merges hashes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Clone>=0:devel/p5-Clone
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
