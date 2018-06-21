# $FreeBSD: head/www/rubygem-gollum-grit_adapter10/Makefile 472976 2018-06-21 15:28:59Z mfechner $

PORTNAME=	gollum-grit_adapter
PORTVERSION=	1.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	10

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Adapter for Gollum to use Grit at the backend

LICENSE=	MIT

RUN_DEPENDS=	rubygem-gitlab-grit>=2.7.1:textproc/rubygem-gitlab-grit

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUNT=	limit:^1\.0\.

.include <bsd.port.mk>
