# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/security/aws-iam-authenticator/Makefile 476311 2018-08-03 17:13:49Z danilo $

PORTNAME=	aws-iam-authenticator
PORTVERSION=	0.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Use AWS IAM credentials to authenticate to a Kubernetes cluster

LICENSE=	APACHE20

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	kubernetes-sigs

PLIST_FILES=	bin/${PORTNAME}

post-patch:
	${LN} -s ${WRKSRC}/vendor ${WRKSRC}/src
	${MKDIR} ${WRKSRC}/src/github.com/heptio/authenticator
	${LN} -s ${WRKSRC}/pkg ${WRKSRC}/src/github.com/heptio/authenticator/pkg

do-build:
	cd ${WRKSRC}/cmd/heptio-authenticator-aws && \
		GOPATH=${WRKSRC} go build

do-install:
	${INSTALL_PROGRAM} \
		${WRKSRC}/cmd/heptio-authenticator-aws/heptio-authenticator-aws \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
