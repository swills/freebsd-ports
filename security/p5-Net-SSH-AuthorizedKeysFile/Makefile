# Created by: Stephon Chen <stephon@gmail.com>
# $FreeBSD: head/security/p5-Net-SSH-AuthorizedKeysFile/Makefile 437249 2017-03-29 23:36:31Z sunpoet $

PORTNAME=	Net-SSH-AuthorizedKeysFile
PORTVERSION=	0.18
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read and modify SSH authorized_keys files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Log-Log4perl>=1:devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
