# $FreeBSD$

PORTNAME=	minio-client
PORTVERSION=	${GH_TAGNAME:S/RELEASE.//:S/Z//:S/T/-/:S/-/./g}
CATEGORIES=	www

MAINTAINER=	jhixson@FreeBSD.org
COMMENT=	Replacement for ls, cp, mkdir, diff and rsync commands for filesystems

LICENSE=	APACHE20

BUILD_DEPENDS=	go>=1.9.4:lang/go \
		bash:shells/bash

OPTIONS_DEFINE=	MC

MC_DESC=	Install as mc

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMC}
MC=	mc
.else
MC=	${PORTNAME}
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	minio
GH_PROJECT=	mc
GH_TAGNAME=	RELEASE.2018-12-05T22-59-07Z
GH_SUBDIR=	src/github.com/${GH_ACCOUNT}/${GH_PROJECT}
MAKE_ENV=	GOPATH=${WRKSRC} GOROOT=${LOCALBASE}/go
COMMIT_ID=	f3eaa54a32f3f48c340e6c48e9960b294e5cc670

PLIST_FILES=	bin/${MC}

do-build:
	@cd ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${GH_PROJECT}; \
	${SETENV} ${MAKE_ENV} GOPATH=${WRKSRC} CGO_ENABLED=0 go build -v -x \
		--ldflags '-X github.com/minio/mc/cmd.Version=${GH_TAGNAME:C/RELEASE\.//:C|(..)-(..)-(..)Z|\1:\2:\3Z|} -X github.com/minio/mc/cmd.ReleaseTag=${GH_TAGNAME} -X github.com/minio/mc/cmd.CommitID=${COMMIT_ID} -X github.com/minio/mc/cmd.GOPATH=${WRKSRC} -s -w' -o ${WRKSRC}/bin/${MC}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${GH_PROJECT}/bin/${MC} \
		${STAGEDIR}${PREFIX}/bin/${MC}

.include <bsd.port.mk>
